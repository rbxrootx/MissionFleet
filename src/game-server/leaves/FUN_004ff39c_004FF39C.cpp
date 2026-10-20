// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF39C .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004ff39c_004FF39C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 160h
        push 5cb750h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A5 BD FF FF: call 0x4fb160
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
        ; Exact mapped bytes E8 89 19 03 00: call 0x530d64
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x19
        __asm _emit 0x03
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
        ; Exact mapped bytes 74 14: je 0x4ff408
        __asm _emit 0x74
        __asm _emit 0x14
        push 168h
        push 5cb750h
        ; Exact mapped bytes E8 FD 55 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff408
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4ff3de
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
