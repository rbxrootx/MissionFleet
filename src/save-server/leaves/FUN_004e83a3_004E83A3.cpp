// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E83A3 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004e83a3_004E83A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AA B0 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e83d4
        __asm _emit 0x75
        __asm _emit 0x14
        push 3aeh
        push 6733e0h
        ; Exact mapped bytes E8 71 09 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e83d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4e83af
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 C1 04 00: call 0x53457d
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 C0 04 00: call 0x534489
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 35 23 F8 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 28 23 F8 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0A 23 F8 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FD 22 F8 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
