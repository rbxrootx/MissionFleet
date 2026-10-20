// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C55A .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_0055c55a_0055C55A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 D1 FF FF: call 0x55974f
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5cf0fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB 87 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 5cf110h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 88 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5cf124h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 87 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5cf138h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 5cf150h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 88 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5cf164h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 85 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 86 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 5cf178h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 84 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 87 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 5cf190h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DA 84 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 86 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 559690h
        ; Exact mapped bytes 75 0F: jne 0x55c663
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5cf1a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 84 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55c670
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cf1d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 84 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5cf20ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 84 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
