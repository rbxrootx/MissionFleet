// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856C580 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_5856c580_5856C580() {
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
        ; Exact mapped bytes E8 7C 5D F1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588a979ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 18: mov cx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 48 26: mov word ptr [eax + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 384h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
