// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE49C .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004de49c_004DE49C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 160h
        push 677f28h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A5 BD FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], ecx
        push 1
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 89 66 04 00: call 0x524b64
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 74 14: je 0x4de508
        __asm _emit 0x74
        __asm _emit 0x14
        push 168h
        push 677f28h
        ; Exact mapped bytes E8 3D A8 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de508
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4de4de
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
