// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588275D0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_588275d0_588275D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 4
        ; Exact mapped bytes 75 35: jne 0x58827615
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 3
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 10: je 0x5882760f
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 02 CC F9 FF: call 0x587c4210
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 46: jmp 0x58827659
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes EB 44: jmp 0x58827659
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 6
        ; Exact mapped bytes 75 35: jne 0x58827653
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 10: je 0x5882764d
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 C4 CB F9 FF: call 0x587c4210
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x58827659
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x58827659
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
    }
}
