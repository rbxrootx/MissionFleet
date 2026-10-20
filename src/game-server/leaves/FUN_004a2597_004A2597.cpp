// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2597 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_004a2597_004A2597() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E5 AC 0A 00: call 0x54d290
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x4a25c4
        __asm _emit 0x74
        __asm _emit 0x14
        push 0af9h
        push 5cbe8ch
        ; Exact mapped bytes E8 41 24 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a25c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4a25a3
        __asm _emit 0x75
        __asm _emit 0xd9
        lea ecx, [ebp - 8]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EA 03 00 00: call 0x4a29c2
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B4 03 00 00: call 0x4a299a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        sub eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
