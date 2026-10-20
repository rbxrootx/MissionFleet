// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770E40 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_58770e40_58770E40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889002dh
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 A9 DC FF: call 0x5853b7d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b54cch
        push 23h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 3C D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 FB 8E D5 FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 AA 00 00 00: mov word ptr [ecx + 0xaa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a9h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 E9 1D D1 FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, 2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 88 00 00 00: mov word ptr [ecx + 0x88], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 100h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 101h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
