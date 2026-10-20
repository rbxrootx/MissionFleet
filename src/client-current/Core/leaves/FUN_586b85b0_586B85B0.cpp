// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B85B0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_586b85b0_586B85B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b90dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1B EE DC FF: call 0x58487400
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586b85f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 0B: jbe 0x586b8608
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9B FA FF FF: call 0x586b80a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB E6: jmp 0x586b85ee
        __asm _emit 0xeb
        __asm _emit 0xe6
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 40 F9 DC FF: call 0x58487f50
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8E F1 DC FF: call 0x584877b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0xdc
        __asm _emit 0xff
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
        ret
    }
}
