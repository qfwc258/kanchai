<li  class="dropdown nav-dropdown"><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></li>


                <li class="dropdown nav-dropdown"> 
                                {dede:field  runphp="yes"}
                        global $dsql;
                        $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
                        $row = $dsql->GetOne($sql);
                        @me=print_R($row);
                        if(is_array($row)){
                        @me='1';
                        }else{
                        @me='2';
                        }
                                {/dede:field}
                <a href="javascript:;" class="has-drop-menu">{dede:field name='typename'/}<i class="arrow"></i></a>
                    <ul class="dropdown-menu">
                        <div class="sort channel clearfix">
                            <p class="title">{dede:field name='typename'/}</p>
                            <ul>
                            </ul>
                        </div>
                        <div class="tags channel clearfix">
                            <ul>
                                {dede:channel  type="son" noself='yes'}
                                <li><a href='[field:typeurl/]' [field:rel/]>[field:typename/]</a></li>
                                {/dede:channel}
                            </ul>
                        </div>
                    </ul>
                </li>