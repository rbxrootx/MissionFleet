// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535E50 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_58535e50_58535E50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882a8dh
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
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8D C4 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a7058h
        push 102h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 F7 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 FE F4 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xf4
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 10h], 64h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], eax
        imul edx, dword ptr [ebp + 14h], 64h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 6ch], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 98h], edx
        push 18h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 74h
        push eax
        ; Exact mapped bytes E8 10 6F 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x6f
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 9ch], 0
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
