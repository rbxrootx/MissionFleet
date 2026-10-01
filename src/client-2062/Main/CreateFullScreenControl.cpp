// Reconstructed from FUN_1002c3d0 Ghidra pseudocode and disassembly.
// Calls and original mapped destinations are checked by the client verifier.
extern "C" void AllocateObjectThunk();
extern "C" void AttachByLayer();
extern "C" void AttachControlList();
extern "C" void CreateFullScreenControl();
extern "C" void CreateLogoControl();
extern "C" void CreateOverlayControl();
extern "C" void InitializeTextControl();
extern "C" void SetTextControlPairedValue();
extern "C" void InitializeLanguageControl();
extern "C" void InitializeDescriptorControl();
extern "C" void InitializeFrameControl();
extern "C" void SetTreeControlVisibility();
extern "C" void SetTreeControlStyle();
extern "C" void FUN_100ffac0();
extern "C" void InitializeControlNode();
extern "C" void InitializeControlVariant();
extern "C" void InitializeCommon();
extern "C" void InitializeRowControl();
extern "C" void InitializeScreenBase();

extern "C" __declspec(naked) void CreateFullScreenControl() {
    __asm {
        push -1
        push 1016dd43h
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        mov eax, dword ptr [esp + 34h]
        push ebx
        mov ebx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push ebp
        mov ebp, dword ptr [esp + 40h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 3ch]
        push edi
        mov edi, dword ptr [esp + 3ch]
        push ebp
        push eax
        push ecx
        push edi
        push ebx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 38h], esi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [esi], 1017566ch
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x6c
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x10
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        xor ebx, ebx
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 100h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5ch], ebx
        ; Exact immediate encoding: mov dword ptr [esi], 101757b0h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [esi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov ecx, 1ah
        __asm _emit 0xb9
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea edi, [esi + 9f74h]
        push 198h
        ; Exact immediate encoding: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esp + 30h], ebx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        ; Exact immediate encoding: je short L_1002C47B
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 10197bfch
        mov ecx, eax
        call FUN_100ffac0
        ; Exact immediate encoding: jmp short L_1002C47D
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C47B:
        xor eax, eax
L_1002C47D:
        push 6ch
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 70h], eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x02
        ; Exact immediate encoding: je short L_1002C4A9
        __asm _emit 0x74
        __asm _emit 0x0e
        push ebp
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        call InitializeFrameControl
        ; Exact immediate encoding: jmp short L_1002C4AB
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C4A9:
        xor eax, eax
L_1002C4AB:
        mov dword ptr [esi + 2c4h], eax
        ; Exact immediate encoding: and word ptr [eax + 24h], 0bfffh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        push 54h
        mov byte ptr [esp + 30h], bl
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x03
        ; Exact immediate encoding: je short L_1002C4EC
        __asm _emit 0x74
        __asm _emit 0x18
        push ebp
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [edi], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        ; Exact immediate encoding: jmp short L_1002C4EE
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C4EC:
        xor edi, edi
L_1002C4EE:
        push 54h
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 2c8h], edi
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x04
        ; Exact immediate encoding: je short L_1002C52C
        __asm _emit 0x74
        __asm _emit 0x1b
        lea eax, [ebp - 5]
        mov ecx, edi
        push eax
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [edi], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        ; Exact immediate encoding: jmp short L_1002C52E
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C52C:
        xor edi, edi
L_1002C52E:
        push 54h
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 2cch], edi
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x05
        ; Exact immediate encoding: je short L_1002C56C
        __asm _emit 0x74
        __asm _emit 0x1b
        lea ecx, [ebp - 0ah]
        push ecx
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [edi], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        ; Exact immediate encoding: jmp short L_1002C56E
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C56C:
        xor edi, edi
L_1002C56E:
        mov dword ptr [esi + 2d8h], edi
        mov ecx, dword ptr [esi + 2c8h]
        push 101h
        mov byte ptr [esp + 30h], bl
        call SetTreeControlStyle
        mov ecx, dword ptr [esi + 2c8h]
        push ebx
        call SetTreeControlVisibility
        mov ecx, dword ptr [esi + 2cch]
        push 0fffffeffh
        call SetTreeControlStyle
        mov ecx, dword ptr [esi + 2d8h]
        push 0fffffeffh
        call SetTreeControlStyle
        mov ecx, dword ptr [esi + 2cch]
        push ebx
        call SetTreeControlVisibility
        mov eax, dword ptr [esi + 2c8h]
        ; Exact immediate encoding: mov ecx, 7fffh
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        push 198h
        and word ptr [eax + 24h], cx
        mov eax, dword ptr [esi + 2cch]
        and word ptr [eax + 24h], cx
        mov eax, dword ptr [esi + 2d8h]
        and word ptr [eax + 24h], cx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x06
        ; Exact immediate encoding: je short L_1002C60C
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 10197bech
        mov ecx, eax
        call FUN_100ffac0
        ; Exact immediate encoding: jmp short L_1002C60E
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C60C:
        xor eax, eax
L_1002C60E:
        push 54h
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 2dch], eax
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x07
        ; Exact immediate encoding: je short L_1002C64C
        __asm _emit 0x74
        __asm _emit 0x1b
        lea edx, [ebp + 0ah]
        mov ecx, edi
        push edx
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [edi], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        ; Exact immediate encoding: jmp short L_1002C64E
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C64C:
        xor edi, edi
L_1002C64E:
        mov dword ptr [esi + 2e0h], edi
        ; Exact immediate encoding: and word ptr [edi + 24h], -2
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 30h], bl
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x08
        ; Exact immediate encoding: je short L_1002C694
        __asm _emit 0x74
        __asm _emit 0x1d
        add ebp, 0ah
        mov ecx, edi
        push ebp
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [edi], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        mov eax, edi
        ; Exact immediate encoding: jmp short L_1002C696
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C694:
        xor eax, eax
L_1002C696:
        ; Exact immediate encoding: mov ecx, -2
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 2e4h], eax
        and word ptr [eax + 24h], cx
        mov dword ptr [esi + 9fe4h], ebx
        mov dword ptr [esi + 9fe8h], ebx
        mov dword ptr [esi + 9fech], ebx
        mov dword ptr [esi + 9ff4h], ebx
        mov dword ptr [esi + 9ff0h], ebx
        and word ptr [esi + 24h], cx
        mov dword ptr [esi + 300h], ebx
        mov dword ptr [esi + 2fch], ebx
        mov dword ptr [esi + 2f8h], ebx
        mov dword ptr [esi + 2f4h], ebx
        mov dword ptr [esi + 9fech], ebx
        ; Exact immediate encoding: mov dword ptr [esi + 8ch], 40000000h
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        push 0e8h
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 88h], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 9fe0h], ebx
        mov dword ptr [esi + 2c0h], ebx
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0a008h], ebx
        mov dword ptr [esi + 0a00ch], ebx
        mov dword ptr [esi + 0a018h], ebx
        mov dword ptr [esi + 0a01ch], ebx
        mov dword ptr [esi + 0a014h], ebx
        ; Exact immediate encoding: mov dword ptr [esi + 0a020h], 100h
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x09
        ; Exact immediate encoding: je short L_1002C799
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact immediate encoding: mov ecx, dword ptr [101c56b0h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push ebx
        push 0ffffffh
        push 226h
        push 1b8h
        push 1e4h
        push 127h
        push ecx
        push ebx
        push esi
        mov ecx, eax
        call InitializeLanguageControl
        ; Exact immediate encoding: jmp short L_1002C79B
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C799:
        xor eax, eax
L_1002C79B:
        push 9ch
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 9ffch], eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 0ah
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0a
        ; Exact immediate encoding: je short L_1002C7EB
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact immediate encoding: mov edx, dword ptr [101c56b0h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push 0ffffffh
        push 226h
        push 284h
        push 1e4h
        push 1bch
        push edx
        push ebx
        push esi
        mov ecx, eax
        call InitializeControlVariant
        ; Exact immediate encoding: jmp short L_1002C7ED
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C7EB:
        xor eax, eax
L_1002C7ED:
        mov dword ptr [esi + 0a000h], eax
        ; Exact immediate encoding: mov dword ptr [eax + 68h], 10101h
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9ffch]
        ; Exact immediate encoding: mov ebp, 2710h
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 2ch], bl
        mov ecx, dword ptr [edi + 40h]
        mov word ptr [edi + 26h], bp
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C81A
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachByLayer
L_1002C81A:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C827
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachControlList
L_1002C827:
        mov eax, dword ptr [esi + 9ffch]
        ; Exact immediate encoding: mov dword ptr [eax + 90h], 0dh
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a000h]
        mov ecx, dword ptr [edi + 40h]
        mov word ptr [edi + 26h], bp
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C84E
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachByLayer
L_1002C84E:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C85B
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachControlList
L_1002C85B:
        mov eax, dword ptr [esi + 0a000h]
        ; Exact immediate encoding: mov ebp, 0fffdh
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov ecx, -2
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push 184h
        ; Exact immediate encoding: mov dword ptr [eax + 8ch], 10h
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ffch]
        and word ptr [eax + 24h], bp
        mov eax, dword ptr [esi + 0a000h]
        and word ptr [eax + 24h], bp
        mov eax, dword ptr [esi + 9ffch]
        and word ptr [eax + 24h], cx
        mov eax, dword ptr [esi + 0a000h]
        and word ptr [eax + 24h], cx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 0bh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0b
        ; Exact immediate encoding: je short L_1002C8E6
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact immediate encoding: mov ecx, dword ptr [101c569ch]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0dcdcdch
        push 21ch
        push 320h
        push 208h
        push 14ah
        push ecx
        push ebx
        push esi
        mov ecx, eax
        call InitializeTextControl
        mov edi, eax
        ; Exact immediate encoding: jmp short L_1002C8E8
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C8E6:
        xor edi, edi
L_1002C8E8:
        mov dword ptr [esi + 0a004h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 2ch], bl
        ; Exact immediate encoding: mov word ptr [edi + 26h], 2710h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        ; Exact immediate encoding: je short L_1002C905
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachByLayer
L_1002C905:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C912
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachControlList
L_1002C912:
        mov ecx, dword ptr [esi + 0a004h]
        push 32h
        call SetTextControlPairedValue
        push 90h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 0ch
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0c
        ; Exact immediate encoding: je short L_1002C965
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact immediate encoding: mov edx, dword ptr [101c569ch]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 1adh
        push 24ah
        push 144h
        push 0d7h
        push edx
        push esi
        mov ecx, eax
        call InitializeControlNode
        ; Exact immediate encoding: jmp short L_1002C967
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002C965:
        xor eax, eax
L_1002C967:
        mov dword ptr [esi + 0a024h], eax
        ; Exact immediate encoding: and word ptr [eax + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a024h]
        mov byte ptr [esp + 2ch], bl
        ; Exact immediate encoding: mov dword ptr [eax + 68h], 10101h
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a024h]
        and word ptr [eax + 24h], bp
        mov edi, dword ptr [esi + 0a024h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 2710h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C9A7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachByLayer
L_1002C9A7:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002C9B4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachControlList
L_1002C9B4:
        lea eax, [esi + 9b74h]
        ; Exact immediate encoding: mov ecx, 80h
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1002C9BF:
        mov dword ptr [eax + 200h], ebx
        mov dword ptr [eax], ebx
        add eax, 4
        dec ecx
        ; Exact immediate encoding: jne short L_1002C9BF
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact immediate encoding: mov dword ptr [esi + 0ach], 9
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
L_1002C9D9:
        ; Exact immediate encoding: mov ebp, dword ptr [10175120h]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
L_1002C9DF:
        call ebp
        cdq
        ; Exact immediate encoding: mov ecx, 320h
        __asm _emit 0xb9
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        idiv ecx
        mov eax, ecx
        sub eax, edx
        mov dword ptr [esi + edi*8 + 1c0h], eax
        call ebp
        cdq
        ; Exact immediate encoding: mov ecx, 258h
        __asm _emit 0xb9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        idiv ecx
        sub ecx, edx
        cmp edi, ebx
        mov dword ptr [esi + edi*8 + 1c4h], ecx
        ; Exact immediate encoding: je short L_1002CA38
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esi + edi*8 + 1c0h]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 96h
        ; Exact immediate encoding: jle short L_1002C9DF
        __asm _emit 0x7e
        __asm _emit 0xbb
        mov eax, dword ptr [esp + 1ch]
        sub eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 96h
        ; Exact immediate encoding: jg short L_1002CA5D
        __asm _emit 0x7f
        __asm _emit 0x27
        ; Exact immediate encoding: jmp short L_1002C9DF
        __asm _emit 0xeb
        __asm _emit 0xa7
L_1002CA38:
        ; Exact immediate encoding: mov eax, 12ch
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 1c0h], 190h
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1c4h], eax
        mov edx, dword ptr [esi + 1c0h]
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 1ch], eax
        ; Exact immediate encoding: jmp short L_1002CA6C
        __asm _emit 0xeb
        __asm _emit 0x0f
L_1002CA5D:
        mov eax, dword ptr [esi + edi*8 + 1c0h]
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 18h], eax
L_1002CA6C:
        push 54h
        call AllocateObjectThunk
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 44h], ebp
        cmp ebp, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 0dh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0d
        ; Exact immediate encoding: je short L_1002CAB5
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [esp + 48h]
        mov eax, dword ptr [esi + edi*8 + 1c4h]
        mov ecx, dword ptr [esi + edi*8 + 1c0h]
        add edx, -14h
        push edx
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, ebp
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [ebp], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact immediate encoding: jmp short L_1002CAB7
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002CAB5:
        xor ecx, ecx
L_1002CAB7:
        push 101h
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + edi*4 + 0b0h], ecx
        call SetTreeControlStyle
        mov ecx, dword ptr [esi + edi*4 + 0b0h]
        push ebx
        call SetTreeControlVisibility
        mov eax, dword ptr [esi + edi*4 + 0b0h]
        ; Exact immediate encoding: and word ptr [eax + 24h], 0bfffh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + edi*4 + 0b0h]
        ; Exact immediate encoding: and word ptr [eax + 24h], 7fffh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 0ach]
        inc edi
        cmp edi, eax
        ; Exact immediate encoding: jl near ptr L_1002C9D9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: call dword ptr [10175120h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        ; Exact immediate encoding: mov ecx, 0e10h
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        idiv ecx
        lea eax, [esi + 1b8h]
        lea ecx, [esi + 130h]
        lea ebp, [esi + 0b0h]
        mov dword ptr [esp + 44h], edi
        ; Exact immediate encoding: mov dword ptr [esp + 40h], 0b4h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esi + 1b0h], edx
        xor edx, edx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        mov dword ptr [ecx], ebx
        mov ecx, dword ptr [esi + 0ach]
        ; Exact immediate encoding: mov eax, 55555556h
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        imul ecx
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor ecx, ecx
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 38h], ecx
L_1002CB61:
        lea eax, [edx + ecx]
        cmp ecx, eax
        ; Exact immediate encoding: jge short L_1002CBBB
        __asm _emit 0x7d
        __asm _emit 0x53
        mov edx, dword ptr [esp + 48h]
        sub eax, ecx
        mov dword ptr [esp + 3ch], eax
        lea edx, [edx + edi*2]
        lea edx, [edi + edx - 14h]
        mov dword ptr [esp + 14h], edx
L_1002CB7D:
        mov eax, dword ptr [esp + 40h]
        mov cx, word ptr [esp + 14h]
        mov dword ptr [ebp + 80h], eax
        mov edi, dword ptr [ebp]
        mov word ptr [edi + 26h], cx
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002CBA0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachByLayer
L_1002CBA0:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002CBAD
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        call AttachControlList
L_1002CBAD:
        mov eax, dword ptr [esp + 3ch]
        add ebp, 4
        dec eax
        mov dword ptr [esp + 3ch], eax
        ; Exact immediate encoding: jne short L_1002CB7D
        __asm _emit 0x75
        __asm _emit 0xc2
L_1002CBBB:
        mov eax, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 38h]
        add eax, 1eh
        mov dword ptr [esp + 40h], eax
        lea eax, [edx*4]
        add ebp, eax
        mov eax, dword ptr [esp + 40h]
        inc edi
        add ecx, edx
        cmp eax, 10eh
        mov dword ptr [esp + 44h], edi
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 10h], ebp
        ; Exact immediate encoding: jl near ptr L_1002CB61
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: movsx edx, word ptr [esp + 48h]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        push 198h
        mov dword ptr [esi + 0a0h], ebx
        mov dword ptr [esi + 9ch], edx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 48h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 0eh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0e
        ; Exact immediate encoding: je short L_1002CC37
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 10197bd8h
        mov ecx, eax
        call FUN_100ffac0
        ; Exact immediate encoding: jmp short L_1002CC39
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002CC37:
        xor eax, eax
L_1002CC39:
        push 90h
        mov byte ptr [esp + 30h], bl
        ; Exact immediate encoding: mov dword ptr [101c57a4h], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 48h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 0fh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0f
        ; Exact immediate encoding: je short L_1002CC9F
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact immediate encoding: mov ecx, dword ptr [101c57a4h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0abh
        ; Exact immediate encoding: jle short L_1002CC80
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact immediate encoding: je short L_1002CC80
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 2ac0h]
        ; Exact immediate encoding: jmp short L_1002CC82
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002CC80:
        xor edx, edx
L_1002CC82:
        mov ecx, dword ptr [esp + 34h]
        push 40h
        push 1fah
        push 173h
        push edx
        push ecx
        push 20h
        mov ecx, eax
        call InitializeDescriptorControl
        ; Exact immediate encoding: jmp short L_1002CCA1
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002CC9F:
        xor eax, eax
L_1002CCA1:
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esi + 9ff8h], eax
        call SetTreeControlStyle
        mov eax, dword ptr [esi + 9ff8h]
        push ebx
        ; Exact immediate encoding: mov dword ptr [eax + 80h], 101h
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ff8h]
        ; Exact immediate encoding: and word ptr [eax + 24h], 7fffh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 9ff8h]
        call SetTreeControlVisibility
        mov eax, dword ptr [esi + 9ff8h]
        mov dword ptr [eax + 84h], ebx
        mov ecx, dword ptr [esi + 9ff8h]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 8]
        push 198h
        ; Exact immediate encoding: mov dword ptr [esi + 350h], 4bh
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 48h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 10h
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x10
        ; Exact immediate encoding: je short L_1002CD29
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 10197bc4h
        mov ecx, eax
        call FUN_100ffac0
        ; Exact immediate encoding: jmp short L_1002CD2B
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002CD29:
        xor eax, eax
L_1002CD2B:
        mov dword ptr [esi + 304h], eax
        mov eax, dword ptr [eax + 164h]
        cmp ax, bx
        mov byte ptr [esp + 2ch], bl
        mov word ptr [esi + 348h], ax
        mov dword ptr [esp + 44h], ebx
        ; Exact immediate encoding: jbe near ptr L_1002CE3F
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, 0fffffcf8h
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [esi + 308h]
        sub eax, esi
        mov dword ptr [esp + 40h], eax
L_1002CD60:
        push 54h
        call AllocateObjectThunk
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        cmp ebp, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 2ch], 11h
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x11
        ; Exact immediate encoding: je near ptr L_1002CE04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 304h]
        mov ecx, dword ptr [esp + 44h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact immediate encoding: jle short L_1002CDAC
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp ecx, ebx
        ; Exact immediate encoding: jl short L_1002CDAC
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact immediate encoding: je short L_1002CDAC
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esp + 40h]
        add eax, ecx
        mov edx, dword ptr [eax + edi]
        mov dword ptr [esp + 48h], edx
        ; Exact immediate encoding: jmp short L_1002CDB0
        __asm _emit 0xeb
        __asm _emit 0x04
L_1002CDAC:
        mov dword ptr [esp + 48h], ebx
L_1002CDB0:
        mov eax, dword ptr [esp + 34h]
        push 2711h
        push ebx
        push ebx
        push ebx
        push ebx
        push eax
        mov ecx, ebp
        call InitializeCommon
        mov eax, dword ptr [esp + 48h]
        ; Exact immediate encoding: mov dword ptr [ebp], 1017523ch
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, ebx
        mov dword ptr [ebp + 50h], eax
        ; Exact immediate encoding: je short L_1002CE00
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
L_1002CE00:
        mov eax, ebp
        ; Exact immediate encoding: jmp short L_1002CE06
        __asm _emit 0xeb
        __asm _emit 0x02
L_1002CE04:
        xor eax, eax
L_1002CE06:
        mov dword ptr [edi], eax
        ; Exact immediate encoding: and word ptr [eax + 24h], 0bfffh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov ecx, dword ptr [edi]
        push ebx
        mov byte ptr [esp + 30h], bl
        call SetTreeControlVisibility
        mov eax, dword ptr [edi]
        xor ecx, ecx
        add edi, 4
        ; Exact immediate encoding: and word ptr [eax + 24h], -2
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 44h]
        mov cx, word ptr [esi + 348h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 44h], eax
        ; Exact immediate encoding: jl near ptr L_1002CD60
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1002CE3F:
        xor eax, eax
        mov ax, word ptr [esi + 348h]
        cmp eax, 10h
        ; Exact immediate encoding: jge short L_1002CE5F
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact immediate encoding: mov ecx, 10h
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + eax*4 + 308h]
        sub ecx, eax
        xor eax, eax
        ; Exact immediate encoding: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
L_1002CE5F:
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esi + 34ch], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 0a074h], ebx
        mov word ptr [esi + 0a078h], bx
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ret 18h
    }
}
