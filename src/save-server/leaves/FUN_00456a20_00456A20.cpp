// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456A20 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00456a20_00456A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 21: jne 0x456a56
        __asm _emit 0x75
        __asm _emit 0x21
        push 677668h
        push 0
        push 50ch
        push 677614h
        push 2
        ; Exact mapped bytes E8 13 64 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x456a56
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x456a2c
        __asm _emit 0x75
        __asm _emit 0xd0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 12 F1 FF FF: call 0x455b80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x456a83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 1C: jae 0x456aa7
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 00 00 00: call 0x456ac0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x456aa5
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 05: jmp 0x456aaa
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D3: jmp 0x456a7a
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
