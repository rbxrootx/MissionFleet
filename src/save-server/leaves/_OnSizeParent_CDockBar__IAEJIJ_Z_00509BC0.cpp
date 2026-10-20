// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509BC0 .. +0xAB bytes.
extern "C" __declspec(naked) void _OnSizeParent_CDockBar__IAEJIJ_Z_00509BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 94h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        cmp dword ptr [eax], 0
        sete cl
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 90h], ecx
        mov eax, dword ptr [ebp - 18h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 94h
        ; Exact mapped bytes E8 EA 89 02 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F1 5F FF FF: call 0x4ffc24
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 94h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
