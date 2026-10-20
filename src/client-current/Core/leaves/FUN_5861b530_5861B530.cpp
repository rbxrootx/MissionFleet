// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861B530 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_5861b530_5861B530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 A9 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 A9 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 A9 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 64 A9 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F5 A8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 A8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B7 A8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 98 A8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 28h], ecx
        push 588ae5deh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3F AA E6 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 69 A8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0d0h], 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 23 00 00: call 0x5861d9d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
