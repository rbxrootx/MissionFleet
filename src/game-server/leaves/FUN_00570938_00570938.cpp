// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570938 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00570938_00570938() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 F7 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0b1h
        push 5d0930h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 01 A8 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 05 FE FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x5709a4
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5709a2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5709a6
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CC: jmp 0x570970
        __asm _emit 0xeb
        __asm _emit 0xcc
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
