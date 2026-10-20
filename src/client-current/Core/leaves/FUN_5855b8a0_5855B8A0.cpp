// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855B8A0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_5855b8a0_5855B8A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x5855b8b1
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 50: jmp 0x5855b901
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 FD FF FF: call 0x5855b6a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 FE FF FF: call 0x5855b6e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB FD FF FF: call 0x5855b6c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC FE FF FF: call 0x5855b7e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 D6 FF FF: call 0x58558f00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
