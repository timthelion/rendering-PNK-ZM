<Style name="landcover">
     <Rule>
      <Filter>[leisure] = 'swimming_pool'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="#b5d0d0"/>
      <LineSymbolizer stroke="blue" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'playground'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer fill="#ccfff1"/>
      <LineSymbolizer stroke="#666" stroke-width="0.3"/>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'camp_site' or [tourism]='caravan_site' or [tourism] = 'picnic_site'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer fill-opacity="0.5" fill="#ccff99"/>
      <LineSymbolizer stroke="#666" stroke-width="0.3"/>
    </Rule>        
    <Rule>
      <Filter>[tourism] = 'attraction'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#f2caea"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'quarry'</Filter>
      &maxscale_zoom11;
      <PolygonPatternSymbolizer file="&symbols;/quarry2.png" />
      <LineSymbolizer stroke="grey" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'vineyard'</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <PolygonSymbolizer fill="&color_vineyard;"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'orchard'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_orchard;"/>
      <PolygonPatternSymbolizer file="&symbols;/orchard.png" opacity="&opacity_symbol_orchard;"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'vineyard'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer fill="&color_vineyard;"/>
      <PolygonPatternSymbolizer file="&symbols;/vineyard.png"  opacity="&opacity_symbol_vineyard;"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom14;
      <Filter>[landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
      <PolygonSymbolizer fill="&color_cemetery;"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom18;
      <Filter>[landuse] = 'residential'</Filter>
      <PolygonSymbolizer fill="&color_landuse_residential;"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom18;
      <Filter>[landuse] = 'garages'</Filter>
      <PolygonSymbolizer fill-opacity="0.2" fill="#996"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom18;
      <Filter>[military] = 'barracks'</Filter>
      <PolygonSymbolizer fill="#ff8f8f"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom13;
      <Filter>[landuse]='field' or [natural]='field'</Filter>
      <PolygonSymbolizer fill-opacity="0.2" fill="#666600"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[landuse]='field' or [natural]='field'</Filter>
      <PolygonSymbolizer fill-opacity="0.2" fill="#666600"/>
      <LineSymbolizer stroke="#660" stroke-width="0.3" stroke-opacity="0.4"/>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom10;
      <Filter>[military] = 'danger_area'</Filter>
      <PolygonSymbolizer fill-opacity="0.3" fill="pink"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom18;
      <Filter>[military] = 'danger_area'</Filter>
      <PolygonPatternSymbolizer file="&symbols;/danger.png" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>([landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard') and [religion] = 'jewish'</Filter>
      <PolygonSymbolizer fill="&color_grave_yard;"/>
      <PolygonPatternSymbolizer file="&symbols;/cemetery_jewish.png" opacity="&opacity_symbol_graveyard;"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>([landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard') and [religion] = 'christian'</Filter>
      <PolygonSymbolizer fill="&color_grave_yard;"/>
      <PolygonPatternSymbolizer file="&symbols;/grave_yard.png" opacity="&opacity_symbol_graveyard;"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>([landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard') and [religion] = 'INT-generic'</Filter>
      <PolygonSymbolizer fill="&color_grave_yard;"/>
      <PolygonPatternSymbolizer file="&symbols;/grave_yard_generic.png" opacity="&opacity_symbol_graveyard;"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      <Filter>[landuse] = 'meadow' or [landuse] = 'grass'</Filter>
      <PolygonSymbolizer fill="&color_meadow;"/>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'park' or [leisure] = 'recreation_ground'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_park;"/>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'zoo'</Filter>
      &maxscale_zoom10;
      <PolygonPatternSymbolizer file="&symbols;/zoo.png" />
    </Rule>
    <Rule>
      <Filter>[leisure] = 'common'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#cfeca8"/>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'garden'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_garden;"/>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'common'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_common_leisure;"/>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'golf_course'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#b5e3b5"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'allotments'</Filter>
      &maxscale_zoom10;
      &minscale_zoom13;
      <PolygonSymbolizer fill="&color_allotments;"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'allotments'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="&color_allotments;"/>
    <!--
      <PolygonPatternSymbolizer file="&symbols;/allotments.png" />
    -->
    </Rule>
    <Rule>
      <Filter>[landuse] = 'forest'</Filter>
      &maxscale_zoom8;
      &minscale_zoom13;
      <PolygonSymbolizer fill="&color_forest;"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'forest'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="&color_forest;"/>
      <PolygonPatternSymbolizer file="&symbols;/forest.png" opacity="&opacity_symbol_forest;"/>
    </Rule>
    <Rule>
      <Filter>[landuse]='farmyard'</Filter>
      &maxscale_zoom9;
      <PolygonSymbolizer fill="#ddbf92"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'farm' or [landuse]='farmland'</Filter>
      &maxscale_zoom9;
      <PolygonSymbolizer fill="#ead8bd"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'recreation_ground' or [landuse] = 'conservation'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#cfeca8"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'village_green'</Filter>
      &maxscale_zoom11;
      <PolygonSymbolizer fill="&color_village_green;"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'retail'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#f1dada"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'retail'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer stroke="red" stroke-width="0.3"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'industrial' or [landuse]='railway'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_industrial;"/>
    </Rule>
    <Rule>
      <Filter>[power] = 'station' or [power]='generator'</Filter>
      &maxscale_zoom10;
      &minscale_zoom11;
      <PolygonSymbolizer fill="#bbb"/>
    </Rule>
    <Rule>
      <Filter>[power] = 'station' or [power]='generator'</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill="#bbb"/>
      <LineSymbolizer stroke="#555" stroke-width="0.4"/>
    </Rule>
    <Rule>
      <Filter>[power] = 'sub_station'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer fill="#bbb"/>
      <LineSymbolizer stroke="#555" stroke-width="0.4"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'commercial'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#efc8c8"/>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'brownfield' or [landuse]='landfill' or [landuse] = 'greenfield' or [landuse]='construction'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill-opacity="&opacity_construction;" fill="&color_construction;"/>
    </Rule>
     <Rule>
      <Filter>[natural] = 'wood' or [landuse] = 'wood'</Filter>
      &maxscale_zoom8;
      <PolygonSymbolizer fill="&color_forest;"/>
      <PolygonPatternSymbolizer file="&symbols;/forest.png" />
    </Rule>
    <Rule>
      <Filter>[natural] = 'desert'</Filter>
      &maxscale_zoom8;
      <PolygonSymbolizer fill="#e3b57a"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'sand'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#ffdf88"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'heath'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#d6d99f"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'grassland'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#c6e4b4"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'scrub'</Filter>
      &maxscale_zoom10;
      &minscale_zoom13;
      <PolygonSymbolizer fill="&color_scrub;"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[natural] = 'scrub'</Filter>
      <PolygonSymbolizer fill="&color_scrub;"/>
      <PolygonPatternSymbolizer file="&symbols;/scrub.png" opacity="&opacity_symbol_scrub;"/>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='hospital' or [amenity]='kindergarten'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_institution;"/>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='hospital' or [amenity]='kindergarten'</Filter>
      &maxscale_zoom12;
      <LineSymbolizer stroke="&color_institution;" stroke-width="0.3"/>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'parking'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="&color_parking;"/>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'parking'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer stroke="&color_parking;" stroke-width="0.3"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'apron'</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill="#e9d1ff"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'aerodrome'</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.2" fill="#ccc"/>
      <LineSymbolizer stroke="#555" stroke-width="0.2"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'beach'</Filter>
      &maxscale_zoom13;
      <PolygonPatternSymbolizer file="&symbols;/beach.png" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'services' or [highway] = 'rest_area'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="#efc8c8"/>
    </Rule>
</Style>
<Style name="landcover_line">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke-linejoin="round" stroke="#f2efe9" stroke-width="3" stroke-linecap="square"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <LineSymbolizer stroke-linejoin="round" stroke="#f2efe9" stroke-width="6" stroke-linecap="square"/>
    </Rule>
</Style>
<Style name="sports_grounds">
    <Rule>
      <Filter>[leisure] = 'sports_centre' or [leisure] = 'stadium'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#33cc99"/>
    </Rule>
    <Rule>
      <Filter>[leisure]='track'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#74dcba"/>
      <LineSymbolizer stroke="#888" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'pitch'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#8ad3af"/>
      <LineSymbolizer stroke="#888" stroke-width="0.5"/>
    </Rule>
</Style>
<Style name="no_access">
     <Rule>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="&color_no_access;" fill-opacity="&opacity_no_access;"/>
      <PolygonPatternSymbolizer file="&symbols;/no_access.png" />
    </Rule>
</Style>
<Style name="paid_access">
     <Rule>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="&color_paid_access;" fill-opacity="&opacity_paid_access;"/>
      <PolygonPatternSymbolizer file="&symbols;/no_access.png" />
    </Rule>
</Style>

<Layer name="landcover" status="on" srs="&osm2pgsql_projection;">
    <StyleName>landcover</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,man_made,military,"natural",power,tourism,name,highway,
       case when religion in ('christian','jewish') then religion else 'INT-generic'::text end as religion
       from &prefix;_polygon
       where landuse is not null
          or leisure is not null
          or aeroway in ('apron','aerodrome')
          or amenity in ('parking','university','college','school','hospital','kindergarten','grave_yard')
          or military in ('barracks','danger_area')
          or "natural" in ('field','beach','desert','heath','mud','grassland','wood','sand','scrub')
          or power in ('station','sub_station','generator')
          or tourism in ('attraction','camp_site','caravan_site','picnic_site','zoo')
          or highway in ('services','rest_area')
       order by z_order,way_area desc
      ) as leisure
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="landcover_line" status="on" srs="&osm2pgsql_projection;">
    <StyleName>landcover_line</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way
       from &prefix;_line
       where man_made='cutline'
      ) as leisure
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="sports_grounds" status="on" srs="&osm2pgsql_projection;">
    <StyleName>sports_grounds</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,leisure,
       case when leisure='pitch' then 2
            when leisure='track' then 1
            else 0 end as prio
       from &prefix;_polygon
       where leisure in ('sports_centre','stadium','pitch','track')
       order by z_order,prio,way_area desc
      ) as sports_grounds
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="no_access" status="on" srs="&osm2pgsql_projection;">
    <StyleName>no_access</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way
       from &prefix;_polygon
       where ((barrier is not null and (access is null or access not in ('yes', 'public')))
       or access in ('private', 'no', 'permissive', 'customer', 'customers')
       or 'garden:type' in ('residential'))
       and (fee is null or fee!='yes')
      ) as no_access
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="paid_access" status="on" srs="&osm2pgsql_projection;">
    <StyleName>paid_access</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way
       from &prefix;_polygon
       where fee = 'yes'
      ) as paid_access
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
