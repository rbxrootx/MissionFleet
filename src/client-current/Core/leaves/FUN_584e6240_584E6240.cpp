// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E6240 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_584e6240_584E6240() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 15 00 00: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a1af0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [edx + 88h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 95h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 96h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 97h], 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ebp + 20h]
        mov byte ptr [edx + 98h], al
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 30h]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, 0fff0h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 50 24: and dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 2C 00: ret 0x2c
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x00
    }
}
