// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883DACE .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_5883dace_5883DACE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 20ch]
        push edi
        push 104h
        push eax
        push esi
        mov edi, ecx
        ; Exact mapped bytes E8 86 36 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x36
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
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 20ch]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 12 00 00 00: call 0x5883db2b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 2B 35 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
