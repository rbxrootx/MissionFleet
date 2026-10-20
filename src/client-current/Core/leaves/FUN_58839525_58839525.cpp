// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839525 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_58839525_58839525() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        lea eax, [ebp - 28h]
        push 10h
        xor ebx, ebx
        push ebx
        push eax
        ; Exact mapped bytes E8 C8 38 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, word ptr [ebp - 1ch]
        push eax
        movzx eax, word ptr [ebp - 1eh]
        push eax
        movzx eax, word ptr [ebp - 20h]
        push eax
        movzx eax, word ptr [ebp - 22h]
        push eax
        movzx eax, word ptr [ebp - 26h]
        push eax
        movzx eax, word ptr [ebp - 28h]
        push eax
        lea eax, [ebp - 18h]
        push 588f1d70h
        push eax
        ; Exact mapped bytes E8 DF 35 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x35
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 20h
        lea eax, [ebp - 30h]
        push eax
        lea eax, [ebp - 2ch]
        push eax
        push ebx
        push 0f003fh
        push ebx
        push ebx
        push ebx
        push 588f1d90h
        ; Exact mapped bytes E8 B4 2D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2d
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
        ; Exact mapped bytes 75 4D: jne 0x588395fd
        __asm _emit 0x75
        __asm _emit 0x4d
        push esi
        ; Exact mapped bytes 8B 35 34 40 89 58: mov esi, dword ptr [0x58894034]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp + 8]
        push 4
        push eax
        push 4
        push ebx
        push 588f1dcch
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push edi
        ; Exact mapped bytes E8 B0 7B 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        push 1
        push ebx
        push 588f1dd8h
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 10h
        lea eax, [ebp - 18h]
        push eax
        push 1
        push ebx
        push 588f1de4h
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 47 7A FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
