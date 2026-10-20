// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE405 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_004ee405_004EE405() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 16 1A FE FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ee434
        __asm _emit 0x75
        __asm _emit 0x14
        push 242h
        push 5c4bd4h
        ; Exact mapped bytes E8 D1 65 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee434
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4ee411
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 B7 EB F9 FF: call 0x48d000
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4ee45e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x4ee469
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
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
