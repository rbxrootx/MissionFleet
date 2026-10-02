// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482320 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58482320() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d5ddh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D 26 33 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x26
        __asm _emit 0x33
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 58894c20h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 3B 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret 14h
    }
}
