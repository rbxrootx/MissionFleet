// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B5350 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_585b5350_585B5350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 0B ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5B 0B ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 500h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 0B ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 84 FC FF: call 0x5857d7f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
