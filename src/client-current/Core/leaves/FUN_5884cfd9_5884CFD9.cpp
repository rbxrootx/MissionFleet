// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884CFD9 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_5884cfd9_5884CFD9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 18h]
        ; Exact mapped bytes 33 05 40 60 90 58: xor eax, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 14h]
        inc eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 5884d1bch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 18h]
        push ecx
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 76 34 00 00: call 0x588504a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        leave
        ret
    }
}
