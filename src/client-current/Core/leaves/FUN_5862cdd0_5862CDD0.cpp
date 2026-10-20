// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CDD0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_5862cdd0_5862CDD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 91 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E 91 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 10h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 78 91 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 62 91 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 1f4h]
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x5862ce57
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 11 F5 FF: call 0x5857dfc0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 1f4h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A F4 01 00 00: mov word ptr [edx + 0x1f4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1f8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1fch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
