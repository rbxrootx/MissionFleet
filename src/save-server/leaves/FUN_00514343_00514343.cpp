// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514343 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_00514343_00514343() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0ffh
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3F 8D FB FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 100h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D2 59 FC FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x514391
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0ah
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F3 52 F3 FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x51438f
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 11: jmp 0x5143a2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 673f60h
        ; Exact mapped bytes E8 76 C2 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 27 8E FB FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
