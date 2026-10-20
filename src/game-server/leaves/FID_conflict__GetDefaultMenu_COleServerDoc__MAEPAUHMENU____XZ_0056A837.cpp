// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A837 .. +0x72 bytes.
extern "C" __declspec(naked) void FID_conflict__GetDefaultMenu_COleServerDoc__MAEPAUHMENU____XZ_0056A837() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 241h
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 0D 09 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 72 FD FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x56a868
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x56a8a5
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 247h
        push 5d053ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E5 08 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 08: je 0x56a88f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 16: jmp 0x56a8a5
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 08: je 0x56a8a3
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes EB 02: jmp 0x56a8a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
