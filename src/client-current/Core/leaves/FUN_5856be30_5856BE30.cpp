// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856BE30 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_5856be30_5856BE30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d63dh
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
        ; Exact mapped bytes E8 9D A9 F1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a9780h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 18: mov dx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 51 26: mov word ptr [ecx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 AD F1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xad
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 40000000h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0ah
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 78h], 384h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 40000000h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 40000000h
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
