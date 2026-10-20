// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A032 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_5883a032_5883A032() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1008h
        ; Exact mapped bytes E8 B1 7A FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp + 0ch]
        push eax
        push 0
        push dword ptr [ebp + 8]
        lea eax, [ebp - 1008h]
        push 0fffh
        push 1000h
        push eax
        ; Exact mapped bytes E8 FB 05 00 00: call 0x5883a663
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov byte ptr [ebp - 9], 0
        lea eax, [ebp - 1008h]
        push eax
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CA 6F FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
