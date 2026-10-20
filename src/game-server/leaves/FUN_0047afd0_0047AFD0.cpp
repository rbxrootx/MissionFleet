// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047AFD0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0047afd0_0047AFD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 581cc4h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 8]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 AC 23 07 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 91 23 07 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp + 8]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 76 23 07 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ebp + 0ch]
        imul edx, edx, 204h
        push edx
        ; Exact mapped bytes E8 54 23 07 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], ecx
        push -1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1B 00 00 00: call 0x47b0a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 4E D7 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
