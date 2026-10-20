// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588335B4 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_588335b4_588335B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 10h], 4
        push eax
        xor esi, esi
        lea eax, [ebp - 8]
        push eax
        push esi
        push 0f003fh
        push esi
        push esi
        push esi
        push 588f1c54h
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 6E 8D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000001h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 62: jne 0x58833658
        __asm _emit 0x75
        __asm _emit 0x62
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 75 53: jne 0x5883364f
        __asm _emit 0x75
        __asm _emit 0x53
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 4]
        push eax
        push esi
        push esi
        push 588f1c88h
        ; Exact mapped bytes E8 43 8D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 76 2E: jbe 0x5883364f
        __asm _emit 0x76
        __asm _emit 0x2e
        push dword ptr [ebp + 8]
        push 1
        ; Exact mapped bytes E8 FA 61 00 00: call 0x58839825
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push dword ptr [ebp - 10h]
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 4], esi
        push eax
        push 4
        push esi
        push 588f1c94h
        ; Exact mapped bytes E8 0F 8D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
