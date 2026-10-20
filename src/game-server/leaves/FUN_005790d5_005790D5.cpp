// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005790D5 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_005790d5_005790D5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5790fe
        __asm _emit 0x75
        __asm _emit 0x14
        push 15eh
        push 5d1160h
        ; Exact mapped bytes E8 07 B9 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5790fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5790e1
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 4F C8 FB FF: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 1B: jne 0x579130
        __asm _emit 0x75
        __asm _emit 0x1b
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 88 20 5E 00: call dword ptr [0x5e2088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x579149
        __asm _emit 0xeb
        __asm _emit 0x19
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 88 20 5E 00: call dword ptr [0x5e2088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
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
