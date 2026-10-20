// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585021A0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_585021a0_585021A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 210h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 210h], 0
        push 208h
        push 0
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 40 AC 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xac
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        lea ecx, [ebp - 20ch]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 04 42 89 58: call dword ptr [0x58894204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 20ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A FA FF FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 210h]
        or eax, 1
        mov dword ptr [ebp - 210h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3E EE 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
