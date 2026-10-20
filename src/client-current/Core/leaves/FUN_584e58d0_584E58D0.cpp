// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E58D0 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_584e58d0_584E58D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f6adh
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
        ; Exact mapped bytes E8 F9 17 00 00: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a1ad4h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 99h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 9ah], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 9bh], 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [ebp + 20h]
        mov byte ptr [edx + 9ch], al
        mov ecx, 0fff0h
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 23 4A 24: and cx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 9E FB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
