// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044AD91 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0044ad91_0044AD91() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x44adc1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 3F: jge 0x44ae06
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 8B FB FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x44ae04
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 56h
        ; Exact mapped bytes 75 07: jne 0x44ae04
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x44ae08
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B2: jmp 0x44adb8
        __asm _emit 0xeb
        __asm _emit 0xb2
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 CE D9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
