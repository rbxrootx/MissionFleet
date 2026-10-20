// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2200 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_004f2200_004F2200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x4f2235
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 28h
        ; Exact mapped bytes E8 2D 47 03 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f2235
        __asm _emit 0x74
        __asm _emit 0x14
        push 35fh
        push 678234h
        ; Exact mapped bytes E8 10 6B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2235
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x4f220c
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x4f2298
        __asm _emit 0x74
        __asm _emit 0x49
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        push 366h
        push 678234h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 EC 7F FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1A: je 0x4f2296
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 F4 00 00 00: call dword ptr [eax + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B1: jmp 0x4f2249
        __asm _emit 0xeb
        __asm _emit 0xb1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
