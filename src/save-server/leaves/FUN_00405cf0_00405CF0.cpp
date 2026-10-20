// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405CF0 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_00405cf0_00405CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6330c8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x405d34
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 BC FF FF: call 0x401a14
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 64: jmp 0x405d98
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 8], 0
        mov esi, esp
        push 63301ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 108h
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 97 F0 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 82 30 01 00 00 01 00: mov word ptr [edx + 0x130], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 80 32 01 00 00 00 00: mov word ptr [eax + 0x132], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 138h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 13ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 144h], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 48 F0 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
