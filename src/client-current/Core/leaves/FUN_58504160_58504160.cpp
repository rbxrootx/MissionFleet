// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504160 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58504160_58504160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 09: jge 0x58504178
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 06: jmp 0x5850417e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 7F 0B: jg 0x5850419a
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x585041a0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F5 FE FF FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
