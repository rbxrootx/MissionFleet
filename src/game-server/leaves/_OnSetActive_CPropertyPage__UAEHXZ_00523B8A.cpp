// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523B8A .. +0x48 bytes.
extern "C" __declspec(naked) void _OnSetActive_CPropertyPage__UAEHXZ_00523B8A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 144h
        push 5c8174h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BC 75 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 0F: je 0x523bbf
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 0
        ; Exact mapped bytes EB 0A: jmp 0x523bc9
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 29 FD FF: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
