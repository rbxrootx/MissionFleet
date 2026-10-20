// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586A00 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_58586a00_58586A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FF 14 F0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 14 F0 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 4C: je 0x58586a8f
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 B8 04 F0 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC 3C F2 FF: call 0x584aa730
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
