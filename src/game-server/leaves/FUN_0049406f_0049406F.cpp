// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049406F .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_0049406f_0049406F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 59: je 0x4940de
        __asm _emit 0x74
        __asm _emit 0x59
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov ecx, dword ptr [edx + 88h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 90h]
        mov eax, dword ptr [edx + 88h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x4941b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x494105
        __asm _emit 0x75
        __asm _emit 0x14
        push 545h
        push 5ca8a4h
        ; Exact mapped bytes E8 00 09 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x494105
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4940e8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [eax + 90h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], edx
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 9ch
        ; Exact mapped bytes E8 9F 99 05 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov ecx, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 23: je 0x4941b6
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov edx, dword ptr [eax + 88h]
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
