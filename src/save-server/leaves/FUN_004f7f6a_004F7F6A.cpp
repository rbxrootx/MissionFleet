// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7F6A .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004f7f6a_004F7F6A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 F3 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 13: je 0x4f7f98
        __asm _emit 0x74
        __asm _emit 0x13
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 C8 BE 68 00: call dword ptr [0x68bec8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 14: jmp 0x4f7fac
        __asm _emit 0xeb
        __asm _emit 0x14
        push 1
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 CC BE 68 00: call dword ptr [0x68becc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
