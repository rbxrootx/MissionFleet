// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408980 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_00408980_00408980() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439952h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 17h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 194h
        ; Exact mapped bytes E8 FA 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 16h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 190h
        ; Exact mapped bytes E8 E8 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 15h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 D6 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 14h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 188h
        ; Exact mapped bytes E8 C4 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 13h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 180h
        ; Exact mapped bytes E8 B2 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 12h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 178h
        ; Exact mapped bytes E8 A0 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 11h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 174h
        ; Exact mapped bytes E8 8E 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 10h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 170h
        ; Exact mapped bytes E8 7C 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0fh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 16ch
        ; Exact mapped bytes E8 6A 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 168h
        ; Exact mapped bytes E8 58 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 164h
        ; Exact mapped bytes E8 46 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 160h
        ; Exact mapped bytes E8 34 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15ch
        ; Exact mapped bytes E8 22 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 158h
        ; Exact mapped bytes E8 10 51 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 154h
        ; Exact mapped bytes E8 FE 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 EC 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 140h
        ; Exact mapped bytes E8 DA 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 C8 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 138h
        ; Exact mapped bytes E8 B6 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 A4 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 92 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 80 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 6E 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 5C 50 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 9C 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
