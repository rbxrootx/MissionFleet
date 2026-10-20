// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587929C0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_587929c0_587929C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E 55 FF FF: call 0x58787f40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x587929ef
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 58: jmp 0x58792a47
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 52 FF FF: call 0x58787c40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 2E: jne 0x58792a30
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x58792a25
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58792a2c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        xor al, al
        ; Exact mapped bytes EB 17: jmp 0x58792a47
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 64h
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DB 57 CF FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x57
        __asm _emit 0xcf
        __asm _emit 0xff
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
