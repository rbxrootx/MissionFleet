// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425280 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00425280_00425280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 1ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 16 06 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 40c78h]
        ; Exact mapped bytes E8 B4 C6 FD FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 66 C7 45 E0 03 00: mov word ptr [ebp - 0x20], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 EC C3 FD FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 E5 FA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
