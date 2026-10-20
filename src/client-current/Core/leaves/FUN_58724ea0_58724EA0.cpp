// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724EA0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58724ea0_58724EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC E6 F4 FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 13a4h], al
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 13a5h], 0
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 13a7h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58724ee3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 24: jge 0x58724f10
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 11a4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0fa4h], 0
        ; Exact mapped bytes EB CA: jmp 0x58724eda
        __asm _emit 0xeb
        __asm _emit 0xca
        mov esp, ebp
        pop ebp
        ret
    }
}
