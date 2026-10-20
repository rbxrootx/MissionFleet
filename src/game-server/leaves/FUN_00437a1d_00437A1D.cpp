// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437A1D .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_00437a1d_00437A1D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        push 6
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3588h]
        push ecx
        ; Exact mapped bytes E8 29 19 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 64h
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 358ch]
        push eax
        ; Exact mapped bytes E8 13 19 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4618h
        push ecx
        ; Exact mapped bytes E8 FD 18 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 384h
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3590h]
        push eax
        ; Exact mapped bytes E8 E4 18 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 19h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 35fch
        push ecx
        ; Exact mapped bytes E8 CE 18 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x437ab7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 7D 1F: jge 0x437adc
        __asm _emit 0x7d
        __asm _emit 0x1f
        push 960h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 3594h]
        push edx
        ; Exact mapped bytes E8 99 18 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB D2: jmp 0x437aae
        __asm _emit 0xeb
        __asm _emit 0xd2
        push 64h
        push 0
        mov eax, dword ptr [ebp - 8]
        add eax, 4618h
        push eax
        ; Exact mapped bytes E8 82 18 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4b88h], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 D8 0C 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
