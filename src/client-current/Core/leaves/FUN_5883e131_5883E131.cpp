// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E131 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_5883e131_5883E131() {
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
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        lea eax, [ebp - 20ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 14h]
        push 104h
        push eax
        push esi
        mov dword ptr [ebp - 210h], ecx
        ; Exact mapped bytes E8 18 30 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        push esi
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 210h]
        lea eax, [ebp - 20ch]
        push edi
        push dword ptr [ebp + 10h]
        push ebx
        push eax
        ; Exact mapped bytes E8 13 00 00 00: call 0x5883e1a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 B6 2E FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
