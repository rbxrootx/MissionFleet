// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CDA00 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_584cda00_584CDA00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 48 FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588986dch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp + 20h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        and ecx, 10h
        ; Exact mapped bytes 74 15: je 0x584cdaa7
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 2ch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        ; Exact mapped bytes EB 12: jmp 0x584cdab9
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 2ch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx + 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
