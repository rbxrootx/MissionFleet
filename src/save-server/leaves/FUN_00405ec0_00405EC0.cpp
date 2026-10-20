// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405EC0 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_00405ec0_00405EC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 15h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F9 EE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 63301ch
        mov edx, dword ptr [ebp - 4]
        add edx, 108h
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DB EE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 80 30 01 00 00 01 00: mov word ptr [eax + 0x130], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 81 32 01 00 00 00 00: mov word ptr [ecx + 0x132], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 134h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 138h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 13ch], edx
        ; Exact mapped bytes 0F BF 05 6C 81 65 00: movsx eax, word ptr [0x65816c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x00
        add eax, 9
        push eax
        push 658100h
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 64 61 0C 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 144h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x405f93
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 15: jge 0x405fb0
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], 0ffffffffh
        ; Exact mapped bytes EB DA: jmp 0x405f8a
        __asm _emit 0xeb
        __asm _emit 0xda
        mov esi, esp
        push 0
        push 80h
        push 2
        push 0
        push 3
        push 40000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 EE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 74 6F: je 0x406050
        __asm _emit 0x74
        __asm _emit 0x6f
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 3ch
        mov edx, dword ptr [ebp - 4]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EA ED 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 144h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BA ED 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A7 ED 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x406052
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 91 ED 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
