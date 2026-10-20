// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004223B0 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004223b0_004223B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b660h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 48h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        ; Exact mapped bytes E8 66 F2 FD FF: call 0x401659
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 2F ED FD FF: call 0x401145
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 1A: jmp 0x422435
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        ; Exact mapped bytes E8 45 EE FD FF: call 0x401271
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        ; Exact mapped bytes E8 EB 34 04 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
    }
}
