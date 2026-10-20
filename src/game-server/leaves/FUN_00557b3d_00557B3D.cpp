// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557B3D .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_00557b3d_00557B3D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 AC FF FF: call 0x5527b5
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 26: je 0x557b7e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 43h]
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x557b78
        __asm _emit 0x75
        __asm _emit 0x14
        push 8aeh
        push 5cfa08h
        ; Exact mapped bytes E8 8D CE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557b78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x557b58
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 11: je 0x557b98
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 54h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 11: je 0x557bb2
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 11: je 0x557bcc
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
