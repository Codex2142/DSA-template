// semua prosedur di SLL.h akan diimplementasikan disini
// include file SLL.h disini

// inisiasi node bernama first dengan nilai null
// inisiasi node bernama current dengan nilai null

// buat prosedur untuk membuat list kosongan
    // first kasih nilai null
    // current kasih nilai null

// prosedur untuk insertfirst , 2 parameter
    // buat node [Node *newNode = new Node()]
    // kasih nilai untuk 3 atribut = id, nama, harga
    // contoh kasih nilai atribut [newNode->nama = nama]

    // dibawah ini pengisian nilai untuk newNode->next
        // lakukan pengecekan if else, apakah first berisi null atau tidak | artinya jika first kosong maka, list tersebut tidak ada node didalamnya
            // first diganti value nya dari yang awalnya 'null' diganti menjadi 'newNode'
            // kemudian pointer untuk newNode->next isikan null, karena 'list yang baru saja kalian buat, hanya memiliki 1 node'

        // else | jika sudah ada node lain yang mengisikan posisi 'first'
            // buat pointer bernama 'temp' dan value nya isikan dengan 'first'
            // kemudian untuk 'first' ganti menjadi 'newNode'
            // lalu pointer newNode->next kalian isi menjadi temp


// prosedur inserafter , 3 parameter
    // if pengecekan first = null ? | ini melakukan pengecekan apakah lsit tersebut ada node nya atau tidak
        // print 'tidak dapat menggunakan prosedur ini, karena list masih kosong'
        // return

    // buat pointer dengan nama 'temp' dengan value 'first'

    // do
        // if temp->nama == parameter 'nama' | jika kondisi true, maka newNode akan di insert setelah node temp->nama
            // buat node [Node *newNode = new Node()]
            // kasih nilai untuk 3 atribut = id, nama, harga
            // contoh kasih nilai atribut [newNode->nama = nama]

            // kemudian pengisian ->next dibawah ini
            // newNode->next = temp->next | artinya node 'temp' 'newNode' memiliki pointer yang merujuk pada node yang sama
            // temp->next = newNode | tetapi boong, temp->next sekarang merujuk ke node yang baru

            // print bahwa node berhasil diinput
            // jangan lupa return
        
        // temp = temp->next | ini ibarat i++ pada perulangan for loop, jadi node 'temp' akan bergeser ke node sebelahnya
    // while temp->next != null | coba saya tanya, node keberapa yang pointernya null ? ya benar, node paling terakhir. artinya perulangan do while ini akan berhenti looping jika mencapai node terakhir

    // print 'makanan tersebut tidak ditemukan' | artinya makanan tersebut memang tidak ada dalam node


// deletefirst
    // if pengecekan first = null ? | ini melakukan pengecekan apakah lsit tersebut ada node nya atau tidak
        // print 'tidak dapat menggunakan prosedur ini, karena list masih kosong'
        // return

    // buat 2 pointer yaitu 'new' dan 'old' | new = untuk calon 'first' yang baru, old = untuk 'first' yang akan dihapus
        // old = first | anggap aja ini absen 1
        // if old->next != null | melakukan pengecekan apakah ada node lain yang dapat dijadikan 'first'
            // new  = old->next | ini absen 2 yang akan dijadikan absen 1
            // first = new

    // print 'makanan old->nama berhasil dihapus'
    // delete old

// deleteafter , 1 parameter
    // if pengecekan first = null ? | ini melakukan pengecekan apakah lsit tersebut ada node nya atau tidak
        // print 'tidak dapat menggunakan prosedur ini, karena list masih kosong'
        // return

    // buat pointer temp = first
    // buat pointer deleteNode = first

    // do
        // if temp->nama == parameter 'nama' | jika kondisi true, maka node akan dihapus setelah node temp->nama
            // if deleteNode = first
                // print 'tidak bisa dihapus dengan prosedur ini'
                // return
            // temp->next = deleteNode->next
            // print 'makanan deleteNode->nama berhasil dihapus'
            // delete deleteNode 
        
        // temp = deleteNode | temp akan mengikuti deleteNode seiring looping
        // deleteNode = deleteNode->next | ini ibarat i++ pada perulangan for loop, jadi node 'deleteNode' akan bergeser ke node sebelahnya
    // while deleteNode->next != null | coba saya tanya, node keberapa yang pointernya null ? ya benar, node paling terakhir. artinya perulangan do while ini akan berhenti looping jika mencapai node terakhir

    // print 'makanan tersebut tidak ditemukan' | artinya makanan tersebut memang tidak ada dalam node

// deletelast
    // if pengecekan first = null ? | ini melakukan pengecekan apakah lsit tersebut ada node nya atau tidak
        // print 'tidak dapat menggunakan prosedur ini, karena list masih kosong'
        // return

    // buat pointer temp = first
    // buat pointer deleteNode = first

    // while deleteNode->next != null | untuk mencari last node
        // temp = deleteNode | temp akan mengikuti deleteNode seiring looping
        // deleteNode = deleteNode->next | ini ibarat i++ pada perulangan for loop, jadi node 'deleteNode' akan bergeser ke node sebelahnya

    // temp->next = null | memutus hubungan dengan deleteNode
    // delete deleteNode

// showall
    // buat pointer temp = first

    // do
        // print 3 atribut Makanan
        // temp = temp->next
    // while temp->next != null
