// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048CAD0 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_0048cad0_0048CAD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        push -1
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 A0 FF FF: call 0x486b30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 581f7ch
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0e4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 124h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 164h], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 AB BC 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
